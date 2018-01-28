# Created by: Silvio Ap Silva aka kanazuchi <alvolivre@live.com>
# $FreeBSD: head/net/py-wmi-query/Makefile 460122 2018-01-27 13:00:58Z dbaio $

PORTNAME=	wmi-query
PORTVERSION=	0.1.4
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	contato@kanazuchi.com
COMMENT=	Python scripts to get wmi data classes in a dict

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}impacket>=0:net/py-impacket@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
