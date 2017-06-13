# Created by: Alexander Moisseev <moiseev@mezonplus.ru>
# $FreeBSD: head/net/rsync-bpc/Makefile 436985 2017-03-26 20:22:00Z robak $

PORTNAME=	rsync-bpc
DISTVERSIONPREFIX=	v
DISTVERSION=	3_0_9_6
CATEGORIES=	net

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Modified rsync that used as part of BackupPC

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	backuppc

USES=		perl5
USE_PERL5=	build
HAS_CONFIGURE=	yes
CONFIGURE_SCRIPT=	configure.sh
CONFIGURE_ARGS=	--prefix=${PREFIX}

PLIST_FILES=	bin/rsync_bpc

.include <bsd.port.mk>
