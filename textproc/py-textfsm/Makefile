# $FreeBSD: head/textproc/py-textfsm/Makefile 466531 2018-04-05 04:45:13Z yuri $

PORTNAME=	textfsm
DISTVERSION=	0.4.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	freebsd_ports@k-worx.org
COMMENT=	Parses semi-structured text into Python tables

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
