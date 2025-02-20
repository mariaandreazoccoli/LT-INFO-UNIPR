package it.unipr.exam0100923;

public abstract class Eleggibile<T> {
	
	protected String nome;
	protected int voti;
	
	public Eleggibile (String nome, int voti) {
		this.nome = nome;
		this.voti = voti;
	}
	
	public String getNome () {
		return this.nome;
	}
	
	public int getVoti () {
		return this.voti;
	}
	
	public boolean equals (Object obj) {
		if (this == obj) 
			return true;
		if (obj == null || getClass() != obj.getClass())
			return false;
		Eleggibile<T> other = (Eleggibile<T>) obj;
		return this.nome.equals(other.nome) && this.voti == other.voti;
	}
	
}
