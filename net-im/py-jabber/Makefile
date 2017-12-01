# Created by: ijliao
# $FreeBSD: head/net-im/py-jabber/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	jabber
PORTVERSION=	0.5
CATEGORIES=	net-im python
MASTER_SITES=	SF/${PORTNAME}py/${PORTNAME}py%20libs/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	jabberpy-${PORTVERSION}-0

MAINTAINER=	flz@FreeBSD.org
COMMENT=	Python Jabber library

USES=		python:2.7
USE_PYTHON=	distutils autoplist
PLIST_FILES=	${PYTHONPREFIX_SITELIBDIR:S;${PREFIX}/;;}/jabber.pth

post-install:
	@${ECHO} "jabber" > ${STAGEDIR}${PYTHON_SITELIBDIR}/jabber.pth

.include <bsd.port.mk>
