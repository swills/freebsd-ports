# $FreeBSD: head/net/nats-streaming-server/Makefile 482795 2018-10-22 21:47:03Z olgeni $

PORTNAME=	nats-streaming-server
PORTVERSION=	0.11.2
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Streaming system server for NATS

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
USE_GITHUB=	yes
GH_ACCOUNT=	nats-io

USE_RC_SUBR=	nats_streaming.sh

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc
	${INSTALL_SCRIPT} ${FILESDIR}/nats_streaming.conf ${STAGEDIR}${PREFIX}/etc/nats_streaming.conf.sample
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
