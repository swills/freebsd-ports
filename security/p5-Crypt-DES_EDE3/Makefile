# Created by: jesper
# $FreeBSD: head/security/p5-Crypt-DES_EDE3/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Crypt-DES_EDE3
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to a implementing 3-DES EDE encryption and decryption

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-DES>=0:security/p5-Crypt-DES

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
