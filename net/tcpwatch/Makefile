# Created by: ports@c0decafe.net
# $FreeBSD: head/net/tcpwatch/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	tcpwatch
PORTVERSION=	1.3
PORTREVISION=	3
CATEGORIES=	net python
MASTER_SITES=	http://hathawaymix.org/Software/TCPWatch/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TCP monitoring and logging tool with support for HTTP 1.1

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tkinter>0:x11-toolkits/py-tkinter@${FLAVOR}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		python
USE_PYTHON=	distutils autoplist concurrent optsuffix

.include <bsd.port.mk>
