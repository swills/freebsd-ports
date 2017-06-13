# Created by: samm
# $FreeBSD: head/sysutils/fsbackup/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	fsbackup
PORTVERSION=	1.2.1
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.opennet.ru/dev/fsbackup/src/
DISTNAME=	fsbackup-1.2pl1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	File system backup and synchronization utility

RUN_DEPENDS=	p5-Net>=0:net/p5-Net

USES=		shebangfix perl5
SHEBANG_FILES=	contrib/*.pl \
		*.pl

NO_BUILD=	yes

do-install:
	@cd ${WRKSRC};./install.pl --prefix=${PREFIX}/fsbackup --prefix-man=${MANPREFIX}/man/man1 --dest=${STAGEDIR}
	@${RM} ${STAGEDIR}${PREFIX}/fsbackup/fsbackup.1

.include <bsd.port.mk>
