# $FreeBSD: head/security/rubygem-metasploit-payloads/Makefile 476878 2018-08-11 11:54:09Z antoine $

PORTNAME=	metasploit-payloads
PORTVERSION=	1.3.40
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Compiled binaries for Metasploit's Meterpreter

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
NO_ARCH_IGNORE=	libndkstager.so
STRIP=
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
