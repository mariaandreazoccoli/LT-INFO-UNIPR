package it.unipr.exam_300623;

public class DVD extends ElementoBibliografico {
	private final String regista;
	private final float costoDVD;
	
	public DVD (String title, String regista, float costo) {
		super(title);
		this.regista = regista;
		this.costoDVD = costo;
	}
	
	public float getCosto () {
		return costoDVD;
	}
	
	public boolean equals (Object obj) {
		if (this == obj)
			return true;
		else if (obj == null || getClass() != obj.getClass())
			return false;
		DVD other = (DVD) obj;
		return this.title.equals(other.title)
				&& this.regista.equals(other.regista);
	}
}
