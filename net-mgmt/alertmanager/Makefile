# Created by: Michal Hanula <michal@hanu.la>
# $FreeBSD$

PORTNAME=	alertmanager
DISTVERSIONPREFIX=	v
DISTVERSION=	0.18.0
CATEGORIES=	net-mgmt

MAINTAINER=	michal@hanu.la
COMMENT=	Alert routing for prometheus

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules gmake
USE_GITHUB=	yes
GH_ACCOUNT=	prometheus
USE_RC_SUBR=	alertmanager

GO_PKGNAME=	github.com/prometheus/${PORTNAME}

USERS=		alertmanager
GROUPS=		alertmanager

BUILD_USER?=	${USER}
LD_FLAG_X_STRING=	-X ${GO_PKGNAME:H}/common/version
LD_FLAG_STRING=		${LD_FLAG_X_STRING}.Version=${PORTVERSION} \
			${LD_FLAG_X_STRING}.Revision=${PORTREVISION} \
			${LD_FLAG_X_STRING}.Branch=release-${PORTVERSION:R} \
			${LD_FLAG_X_STRING}.BuildUser=${BUILD_USER}
GO_BUILDFLAGS=		-v -ldflags "${LD_FLAG_STRING}"
GO_TARGET=		./cmd/alertmanager \
			./cmd/amtool

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/alertmanager
	${INSTALL_DATA} \
		${WRKSRC}/doc/examples/simple.yml \
		${STAGEDIR}${PREFIX}/etc/alertmanager/alertmanager.yml.sample

.include <bsd.port.mk>
