# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/mail/p5-Email-Find/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Email-Find
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Find RFC 822 email addresses in plain text

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-Valid>=0:mail/p5-Email-Valid

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
