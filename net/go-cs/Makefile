# Created by: Andy Kosela <akosela@andykosela.com>
# $FreeBSD: head/net/go-cs/Makefile 447082 2017-08-01 22:33:36Z ultima $

PORTNAME=	go-cs
PORTVERSION=	0.8
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	akosela@andykosela.com
COMMENT=	Concurrent ssh client

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	akosela

PLIST_FILES=	bin/cs man/man1/cs.1.gz

GO_TARGET=	${GO_PKGNAME}/cs

post-install:
	${INSTALL_MAN} ${WRKSRC}/cs.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
