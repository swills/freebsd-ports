# Created by: Carlo Strub <c-s@c-s.li>
# $FreeBSD: head/devel/bzr-builder/Makefile 415839 2016-05-25 15:43:34Z mat $

PORTNAME=	bzr-builder
PORTVERSION=	0.7.3
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://launchpadlibrarian.net/100761063/ \
		http://www.c-s.li/ports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bzr plugin to construct a bzr branch based on a "recipe"

LICENSE=	GPLv3

BUILD_DEPENDS=	bzr:devel/bzr
RUN_DEPENDS=	bzr:devel/bzr

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
