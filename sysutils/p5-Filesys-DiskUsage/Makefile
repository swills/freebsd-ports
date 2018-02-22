# Created by: Alex Deiter <tiamat@komi.mts.ru>
# $FreeBSD: head/sysutils/p5-Filesys-DiskUsage/Makefile 462494 2018-02-21 12:29:13Z culot $

PORTNAME=	Filesys-DiskUsage
PORTVERSION=	0.11
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Perl equivalent of du(1)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Warn>0:devel/p5-Test-Warn

NO_ARCH=	YES
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${RM} ${WRKSRC}/lib/Filesys/DiskUsage.pm.orig

.include <bsd.port.mk>
