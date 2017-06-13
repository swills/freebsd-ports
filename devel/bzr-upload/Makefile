# Created by: Carlo Strub <c-s@c-s.li>
# $FreeBSD: head/devel/bzr-upload/Makefile 415839 2016-05-25 15:43:34Z mat $

PORTNAME=	bzr-upload
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://launchpadlibrarian.net/96912507/ \
		http://www.c-s.li/ports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bzr plugin to incrementally upload changes to a dumb server

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:devel/bzr
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
