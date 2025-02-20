package it.unipr.exam0100923;

public class Coalizione extends Eleggibile<Coalizione> {
	
	private Partito[] insiemePartiti;
	
	public Coalizione(String nome, Partito[] insiemePartiti) {
		super(nome, getVoti(insiemePartiti) );
		this.insiemePartiti = insiemePartiti;
	}
	
	public static int getVoti (Partito[] insiemePartito) {
		int sommaVoti = 0;
		for (Partito partito : insiemePartito) {
			sommaVoti += partito.getVoti();
		}
		return sommaVoti;
	}
	
	public boolean equals (Object obj) {
		if (this == obj)
			return true;
		else if (obj == null || getClass() != obj.getClass())
			return false;
		Coalizione other = (Coalizione) obj;
		for (int i = 0; i < other.insiemePartiti.length; i++)
			if (!(this.insiemePartiti[i].equals(other.insiemePartiti[i])))
				return false;
		return this.nome.equals(other.nome);		
	}
}
