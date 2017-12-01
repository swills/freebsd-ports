# Created by: Silvio Ap Silva aka kanazuchi <alvolivre@live.com>
# $FreeBSD: head/net/py-wmi-query/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	wmi-query
PORTVERSION=	0.1.3
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alvolivre@live.com
COMMENT=	Python scripts to get wmi data classes in a dict

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}impacket>=0:net/py-impacket@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
