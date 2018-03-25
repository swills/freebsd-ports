# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/net/sshping/Makefile 465103 2018-03-20 18:09:36Z ehaupt $

PORTNAME=	sshping
PORTVERSION=	0.1.4
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	SSH-based ping to measure character echo latency and bandwidth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libssh.so:security/libssh

USES=		cmake localbase:ldflags perl5
USE_GITHUB=	yes
USE_PERL5=	build

GH_ACCOUNT=	spook

PLIST_FILES=	bin/sshping man/man8/sshping.8.gz

.include <bsd.port.mk>
