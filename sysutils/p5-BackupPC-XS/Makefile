# Created by: Alexander Moisseev <moiseev@mezonplus.ru>
# $FreeBSD: head/sysutils/p5-BackupPC-XS/Makefile 443439 2017-06-12 10:39:32Z sunpoet $

PORTNAME=	BackupPC-XS
PORTVERSION=	0.56
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CBARRATT
PKGNAMEPREFIX=	p5-

MAINTAINER=	moiseev@mezonplus.ru
COMMENT=	Perl extension for BackupPC libraries

LICENSE=	GPLv3

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/BackupPC/XS/XS.so

.include <bsd.port.mk>
