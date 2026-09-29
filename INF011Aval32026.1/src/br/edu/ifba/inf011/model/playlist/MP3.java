package br.edu.ifba.inf011.model.playlist;

import br.edu.ifba.inf011.avaliacao3.visitor.PlaylistVisitor;

/** ConcreteElement do padrão Visitor. */
public class MP3 implements PlaylistItem {

    private final String nome;
    private final double tamanhoMegaBytes;

    public MP3(String nome, double tamanhoMegaBytes) {
        this.nome = nome;
        this.tamanhoMegaBytes = tamanhoMegaBytes;
    }

    public double getTamanhoMegaBytes() {
        return this.tamanhoMegaBytes;
    }

    public String getNome() {
        return this.nome;
    }

    @Override
    public void accept(PlaylistVisitor visitor) {
        visitor.visit(this);
    }
}
