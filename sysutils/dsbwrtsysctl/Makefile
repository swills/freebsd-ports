# $FreeBSD: head/sysutils/dsbwrtsysctl/Makefile 409774 2016-02-28 22:12:36Z rakuco $

PORTNAME=	dsbwrtsysctl
PORTVERSION=	0.1.3
CATEGORIES=	sysutils
MASTER_SITES=	http://freeshell.de/~mk/download/

MAINTAINER=	mk@nic-nac-project.org
COMMENT=	Changes variable=value pairs in sysctl.conf, or adds them

LICENSE=	BSD2CLAUSE

USES=		tar:tgz

PLIST_FILES=	bin/dsbwrtsysctl

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dsbwrtsysctl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
