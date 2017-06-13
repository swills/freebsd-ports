# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-Rcs-Agent/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Rcs-Agent
PORTVERSION=	1.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nick@foobar.org
COMMENT=	Perl module for RCS archive manipulation

BUILD_DEPENDS=	p5-String-ShellQuote>1.00:textproc/p5-String-ShellQuote
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
