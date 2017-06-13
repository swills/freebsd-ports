# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/security/p5-Authen-PAAS/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Authen-PAAS
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl Authentication & Authorization Service

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-Config-Record>=1.1.0:devel/p5-Config-Record \
		p5-Log-Log4perl>=0:devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
