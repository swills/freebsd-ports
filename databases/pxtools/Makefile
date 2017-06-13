# Created by: Chris D. Faulhaber <jedgar@FreeBSD.org>
# $FreeBSD: head/databases/pxtools/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	pxtools
PORTVERSION=	0.0.20
PORTREVISION=	4
CATEGORIES=	databases
MASTER_SITES=	http://jan.kneschke.de/downloads/pxtools/ \
		http://www.sourcefiles.org/Databases/Utilities/Conversion/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Collection of tools to work with Paradox databases

LICENSE=	GPLv2

USES=		gettext
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
