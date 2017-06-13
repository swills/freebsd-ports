# Created by: Peter Vereshagin <peter@vereshagin.org>
# $FreeBSD: head/devel/p5-IPC-MMA/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	IPC-MMA
PORTVERSION=	0.81
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	peter@vereshagin.org
COMMENT=	Improved Perl interface to Ralf Engelschall's mm library

BUILD_DEPENDS=	p5-Devel-CheckOS>=0:devel/p5-Devel-CheckOS
RUN_DEPENDS=	p5-Devel-CheckOS>=0:devel/p5-Devel-CheckOS
LIB_DEPENDS=	libmm.so:devel/mm
TEST_DEPENDS=	p5-Test-Warn>=0:devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
