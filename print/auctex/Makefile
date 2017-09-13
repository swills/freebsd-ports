# Created by: Martin Kammerhofer
# $FreeBSD: head/print/auctex/Makefile 449697 2017-09-12 15:38:56Z ashish $

PORTNAME=	auctex
PORTVERSION=	11.90
PORTREVISION=	2
CATEGORIES=	print elisp
MASTER_SITES=	GNU
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Integrated environment for writing LaTeX using GNU Emacs

LICENSE=	GPLv3

USES=		ghostscript gmake
USE_EMACS=	yes
USE_TEX=	latex texhash
TEXHASHDIRS=	${TEXMFDIR}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-lispdir=${PREFIX}/${EMACS_VERSION_SITE_LISPDIR} \
	--with-auto-dir=${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}/auctex/auto \
	--with-texmf-dir=${PREFIX}/${TEXMFDIR}
PORTDOCS=	tex-ref.pdf
INFO=		auctex preview-latex
PLIST_SUB=	TEXMFDIR=${TEXMFDIR}
SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

OPTIONS_DEFINE=	DOCS
DOCS_CONFIGURE_ON=	--docdir=${DOCSDIR}
DOCS_CONFIGURE_OFF=	WITHOUT_AUCTEX_DOCSDIR=yes

.include <bsd.port.mk>
