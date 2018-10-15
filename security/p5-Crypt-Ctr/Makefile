# Created by: Gabor Kovesdan
# $FreeBSD: head/security/p5-Crypt-Ctr/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Crypt-Ctr
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension for encrypting data in Counter Mode

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-CFB>=0:security/p5-Crypt-CFB

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
