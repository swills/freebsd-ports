# Created by: Carlo Strub
# $FreeBSD: head/devel/bzr-fastimport/Makefile 415839 2016-05-25 15:43:34Z mat $

PORTNAME=	bzr-fastimport
PORTVERSION=	0.13.0
CATEGORIES=	devel
MASTER_SITES=	http://launchpadlibrarian.net/94774555/ \
		http://www.c-s.li/ports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Provide fast loading of revision control data into bzr

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:devel/bzr
RUN_DEPENDS=	bzr:devel/bzr \
		${PYTHON_SITELIBDIR}/fastimport/__init__.py:devel/py-fastimport

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
