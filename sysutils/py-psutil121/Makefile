# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD: head/sysutils/py-psutil121/Makefile 455813 2017-12-09 00:42:05Z linimon $

PORTNAME=	psutil
PORTVERSION=	1.2.1
PORTREVISION=	2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	121

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Process utilities module for Python

LICENSE=	BSD3CLAUSE

BROKEN_armv6=		fails to compile: psutil/_psutil_bsd.c:957:23: error: no member named 'kf_sa_local' in 'struct kinfo_file'
BROKEN_armv7=		fails to compile: psutil/_psutil_bsd.c:957:23: error: no member named 'kf_sa_local' in 'struct kinfo_file'

PORTSCOUT=	limit:^1\.2\.

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
