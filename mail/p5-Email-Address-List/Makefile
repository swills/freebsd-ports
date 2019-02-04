# Created by: Matthew Seaman <matthew@FreeBSD.org>
# $FreeBSD: head/mail/p5-Email-Address-List/Makefile 491757 2019-01-31 19:37:48Z matthew $

PORTNAME=	Email-Address-List
PORTVERSION=	0.06
CATEGORIES=	mail perl5
MASTER_SITES=	http://download.bestpractical.com/mirror/ \
		CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	RFC-close address list parsing

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-Address>0:mail/p5-Email-Address

NO_ARCH=	yes

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
