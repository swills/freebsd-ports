# Created by: Attila Nagy <bra@fsn.hu>
# $FreeBSD: head/mail/p5-Mail-CheckUser/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Mail-CheckUser
PORTVERSION=	1.21
PORTREVISION=	2
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bra@fsn.hu
COMMENT=	Perl module to check email addresses for validity

BUILD_DEPENDS=  p5-Net-DNS>=0:dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
