# Created by: Joerg Wunsch <joerg@FreeBSD.org>
# $FreeBSD: head/print/latex2rtf/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	latex2rtf
PORTVERSION=	2.3.8
CATEGORIES=	print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-unix/${PORTVERSION} \
		TEX_CTAN

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Translator from LaTeX to RTF

USES=		shebangfix makeinfo
SHEBANG_FILES=	${WRKSRC}/scripts/latex2png

OPTIONS_DEFINE= LATEX2PNG
LATEX2PNG_DESC= Install latex2png utility
OPTIONS_SUB=    yes

LATEX2PNG_RUN_DEPENDS=  convert:graphics/ImageMagick

MAKE_ARGS+=	MANDIR=${PREFIX}/man/man1 CFGDIR=${DATADIR}/cfg \
		BINDIR=${PREFIX}/bin

.include <bsd.port.mk>
