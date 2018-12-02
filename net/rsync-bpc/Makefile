# Created by: Alexander Moisseev <moiseev@mezonplus.ru>
# $FreeBSD: head/net/rsync-bpc/Makefile 486255 2018-11-30 14:22:23Z swills $

PORTNAME=	rsync-bpc
DISTVERSION=	3.0.9.13
CATEGORIES=	net

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Modified rsync that used as part of BackupPC

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		perl5

USE_GITHUB=	yes
GH_ACCOUNT=	backuppc

USE_PERL5=	build
HAS_CONFIGURE=	yes
CONFIGURE_SCRIPT=	configure.sh
CONFIGURE_ARGS=	--prefix=${PREFIX}

PLIST_FILES=	bin/rsync_bpc

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/rsync_bpc

.include <bsd.port.mk>
