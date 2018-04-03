# $FreeBSD: head/www/miniflux/Makefile 466171 2018-04-01 17:01:32Z krion $

PORTNAME=	miniflux
DISTVERSION=	2.0.4
CATEGORIES=	www

MAINTAINER=	krion@FreeBSD.org
COMMENT=	Miniflux is a self-hosted software to read RSS/Atom/JSON feeds

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go pgsql
WANT_PGSQL=	server

USE_GITHUB=	yes
GH_ACCOUNT=	miniflux

GO_PKGNAME=	github.com/miniflux/${PORTNAME}

post-install:
		${INSTALL_DATA} ${FILESDIR}/miniflux.conf.sample \
			${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
