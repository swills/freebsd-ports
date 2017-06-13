# Created by: Rodrigo OSORIO <rodrigo@FreeBSD.org>
# $FreeBSD: head/multimedia/podcastdl/Makefile 413665 2016-04-19 23:31:46Z rodrigo $

PORTNAME=	podcastdl
PORTVERSION=	0.3.3
CATEGORIES=	multimedia
MASTER_SITES=	http://rodrigo.osorio.free.fr/freebsd/distfiles/ \
		http://files.bebik.net/podcastdl/

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Simple command line podcast client written in plain C

LICENSE=	ISCL

LIB_DEPENDS=	libmrss.so:textproc/libmrss

USES=		cmake

PLIST_FILES=	bin/podcastdl

.include <bsd.port.mk>
