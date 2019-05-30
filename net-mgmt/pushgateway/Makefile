# Created by: Athanasios Douitsis <aduitsis@cpan.org>
# $FreeBSD$

PORTNAME=	pushgateway
DISTVERSIONPREFIX=	v
DISTVERSION=	0.6.0
CATEGORIES=	net-mgmt

MAINTAINER=	aduitsis@cpan.org
COMMENT=	Prometheus push acceptor for ephemeral and batch jobs

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go gmake
GH_ACCOUNT=	prometheus
USE_GITHUB=	yes

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

USE_RC_SUBR=	pushgateway

USERS=		prometheus
GROUPS=		prometheus

do-build:
	cd ${GO_WRKSRC} && ${SETENV} ${MAKE_ENV} ${GO_ENV} ${GO_CMD} install

do-install:
	${INSTALL_PROGRAM} ${GO_WRKDIR_BIN}/pushgateway ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DESTDIR}/var/db/${PORTNAME}

pre-test:
	${LN} -sf ${WRKSRC}/vendor ${WRKSRC}/src

do-test:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${GO_ENV} GOPATH="${WRKDIR}:${WRKSRC}:${LOCAL_GOPATH}" ${GMAKE} test

.include <bsd.port.mk>
