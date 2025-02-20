package it.unipr.exam_300623;

import java.util.HashSet;
import java.util.Set;

public class Biblioteca implements Comparable<Biblioteca>{
	private Set<ElementoBibliografico> prestati;
	private Set<ElementoBibliografico> disponibili;
	
	public Biblioteca () {
		this.disponibili = new HashSet<>();
		this.prestati = new HashSet<>();
	}
	
	public void add (ElementoBibliografico elem) {
		disponibili.add(elem);
	}
	
	public void presta (ElementoBibliografico elem) throws BibliotecaException {
		if (!(disponibili.contains(elem)))
			throw new BibliotecaException("Elemento non disponibile.");
	
		disponibili.remove(elem);
		prestati.add(elem);
	}
	
	public void restituisci (ElementoBibliografico elem) throws BibliotecaException {
		if (!(prestati.contains(elem)))
			throw new BibliotecaException("Elemento non presente nell'elenco dei non disponibili.");
		prestati.remove(elem);
		disponibili.add(elem);
	}

	@Override
	public int compareTo(Biblioteca other) {
		return Integer.compare(this.disponibili.size(), other.disponibili.size());
	}
}
