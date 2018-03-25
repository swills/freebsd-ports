# $FreeBSD: head/devel/py-mailcap-fix/Makefile 464818 2018-03-17 13:52:04Z dbaio $

PORTNAME=	mailcap_fix
PORTVERSION=	1.0.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Mailcap module that correctly handles windcard entries

LICENSE=	UNLICENSE
LICENSE_FILE=	${WRKSRC}/UNLICENSE

USES=		python

USE_GITHUB=	yes
GH_ACCOUNT=	michael-lazar

USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
