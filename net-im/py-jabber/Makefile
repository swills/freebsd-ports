# Created by: ijliao
# $FreeBSD: head/net-im/py-jabber/Makefile 463723 2018-03-06 12:32:00Z tobik $

PORTNAME=	jabber
PORTVERSION=	0.5
CATEGORIES=	net-im python
MASTER_SITES=	SF/${PORTNAME}py/${PORTNAME}py%20libs/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	jabberpy-${PORTVERSION}-0

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python Jabber library

USES=		python:2.7
USE_PYTHON=	distutils autoplist
PLIST_FILES=	${PYTHONPREFIX_SITELIBDIR:S;${PREFIX}/;;}/jabber.pth

post-install:
	@${ECHO} "jabber" > ${STAGEDIR}${PYTHON_SITELIBDIR}/jabber.pth

.include <bsd.port.mk>
