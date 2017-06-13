# Created by: patrick@mindstep.com
# $FreeBSD: head/security/p5-Crypt-Blowfish/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-Blowfish
PORTVERSION=	2.14
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the Blowfish encryption alogorithm

BUILD_DEPENDS=	p5-Crypt-CBC>=0:security/p5-Crypt-CBC

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
