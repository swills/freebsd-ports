# Created by: Chi
# $FreeBSD: head/science/xmakemol/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	xmakemol
PORTVERSION=	5.16
PORTREVISION=	6
CATEGORIES=	science
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Molecule Viewer Program Based on Motif Widget

USES=		gmake motif shebangfix
USE_XORG=	xpm
USE_GL=		glut glw
GNU_CONFIGURE=	yes
SHEBANG_FILES=	xmake_anim.pl

PLIST_FILES=	bin/xmake_anim.pl \
		bin/xmakemol \
		man/man1/xmakemol.1.gz \
		%%DATADIR%%/elements

.include <bsd.port.mk>
