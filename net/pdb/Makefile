# Created by: gnn
# $FreeBSD: head/net/pdb/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	pdb
PORTVERSION=	0.1
CATEGORIES=	net
MASTER_SITES=	SF/pktdbg/pktdbg/${PORTVERSION}%20Beta
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Packet Debugger

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pcs/__init__.py:net/py-pcs

USES=		python
USE_PYTHON=	distutils pythonprefix

.include <bsd.port.mk>
