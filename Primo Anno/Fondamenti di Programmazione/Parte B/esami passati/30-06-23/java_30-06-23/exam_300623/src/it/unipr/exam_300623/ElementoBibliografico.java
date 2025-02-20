package it.unipr.exam_300623;

public abstract class ElementoBibliografico {
	protected String title;
		
	public ElementoBibliografico (String title) {
		this.title = title;
	}
	
	public abstract float getCosto();
	
	public boolean equals (Object obj) {
		if (this == obj) 
			return true;
		else if (obj == null || getClass() != obj.getClass())
			return false;
		ElementoBibliografico other = (ElementoBibliografico) obj;
		return this.title.equals(other.title);
	}
}
