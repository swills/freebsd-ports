# $FreeBSD: head/x11-themes/gnome-icons-dropline-nou/Makefile 449331 2017-09-06 09:01:45Z amdmi3 $

PORTNAME=	dropline-nou
PORTVERSION=	090208
CATEGORIES=	x11-themes gnome
MASTER_SITES=	http://www.silvestre.com.ar/icons/
DISTNAME=	Nou-${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Dropline Nou Icons for Gnome

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/Nou/COPYING

USES=		tar:bzip2
NO_WRKSUBDIR=	yes

post-extract:
	@${RM} ${WRKSRC}/.icon-theme.cache

.include "${.CURDIR}/../gnome-icons/bsd.gnome-icons.mk"
.include <bsd.port.mk>
