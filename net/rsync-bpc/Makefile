# Created by: Alexander Moisseev <moiseev@mezonplus.ru>
# $FreeBSD: head/net/rsync-bpc/Makefile 456290 2017-12-14 13:37:38Z joneum $

PORTNAME=	rsync-bpc
DISTVERSION=	3.0.9.11
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
