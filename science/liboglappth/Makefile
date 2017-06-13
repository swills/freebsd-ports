# Created by: Nakata Maho <maho@FreeBSD.org>
# $FreeBSD: head/science/liboglappth/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	liboglappth
PORTVERSION=	1.0.0
PORTREVISION=	4
CATEGORIES=	science
MASTER_SITES=	http://bioinformatics.org/ghemical/download/release20111012/	\
		http://bioinformatics.org/ghemical/download/current

MAINTAINER=	maho@FreeBSD.org
COMMENT=	Support libraries of science/ghemical port

GNU_CONFIGURE=  yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix
USE_GL=		glu

CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
