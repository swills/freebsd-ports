# Created by: Petr Holub <hopet@ics.muni.cz>
# $FreeBSD: head/devel/jrtplib/Makefile 473824 2018-07-03 13:00:33Z rodrigo $

PORTNAME=	jrtplib
PORTVERSION=	3.11.1
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://research.edm.uhasselt.be/jori/jrtplib/

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Object-oriented RTP library written in C++

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.MIT

USES=		cmake pathfix tar:bzip2
USE_LDCONFIG=	yes

PLIST_SUB=	JRTPLIB_VER="${PORTVERSION}"

.include <bsd.port.mk>
