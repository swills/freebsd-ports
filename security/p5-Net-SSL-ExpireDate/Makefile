# Created by: Stephon Chen <stephon@gmail.com>
# $FreeBSD: head/security/p5-Net-SSL-ExpireDate/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Net-SSL-ExpireDate
PORTVERSION=	1.20
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Obtain expiration date of certificate

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Crypt-OpenSSL-X509>=0:security/p5-Crypt-OpenSSL-X509 \
		p5-DateTime>=0:devel/p5-DateTime \
		p5-Time-Duration-Parse>=0:devel/p5-Time-Duration-Parse \
		p5-TimeDate>=0:devel/p5-TimeDate \
		p5-UNIVERSAL-require>=0:devel/p5-UNIVERSAL-require

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
