# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: head/dns/py-easyzone/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	easyzone
PORTVERSION=	1.2.2
PORTREVISION=	2
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bra@fsn.hu
COMMENT=	DNS Zone abstraction module for Python

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dnspython>=1.9.4:dns/py-dnspython
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
