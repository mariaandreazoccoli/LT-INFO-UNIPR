package it.unipr.exam_300623;

public class Libro extends ElementoBibliografico {
	private final String autore;
	private final float costoLibro;
	
	public Libro (String title, String autore, float costo) {
		super(title);
		this.autore = autore;
		this.costoLibro = costo;
	}
	
	public float getCosto() {
		return costoLibro;
	}
	
	public boolean equals (Object obj) {
		if (this == obj)
			return true;
		else if (obj == null || getClass() != obj.getClass())
			return false;
		Libro other = (Libro) obj;
		return this.autore.equals(other.autore) 
				&& this.costoLibro == other.costoLibro 
				&& this.title.equals(other.title);
	}
	
}
