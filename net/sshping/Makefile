# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/net/sshping/Makefile 448085 2017-08-17 10:53:46Z ehaupt $

PORTNAME=	sshping
PORTVERSION=	0.0.2017081601
CATEGORIES=	net

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	SSH-based ping to measure character echo latency and bandwidth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libssh.so:security/libssh

USES=		localbase:ldflags
USE_GITHUB=	yes

GH_ACCOUNT=	spook
GH_TAGNAME=	0856aa5

LDFLAGS+=	-lssh

PLIST_FILES=	bin/sshping

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} <= 1100511
BUILD_DEPENDS=	clang40:devel/llvm40
CXX=		clang++40
.endif

do-build:
	${CXX} ${CXXFLAGS} ${LDFLAGS} -I ${WRKSRC}/ext \
		${WRKSRC}/src/sshping.cxx -o ${WRKSRC}/bin/sshping

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
