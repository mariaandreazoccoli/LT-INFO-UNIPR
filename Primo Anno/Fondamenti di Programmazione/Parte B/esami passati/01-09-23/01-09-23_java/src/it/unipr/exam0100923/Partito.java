package it.unipr.exam0100923;

public class Partito extends Eleggibile<Partito> {

	public Partito(String nomePartito) {
		super(nomePartito, 0);
	}
	
	public void voto () {
		this.voti += 1;
	}
	
	public boolean equals (Object obj) {
		if (this == obj)
			return true;
		else if (obj == null || getClass() != obj.getClass())
			return false;
		Partito other = (Partito) obj;
		return this.nome.equals(other.nome) && this.voti == other.voti; 
	}
}
