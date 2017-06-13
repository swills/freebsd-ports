# Created by: fluffy
# $FreeBSD: head/mail/opensmtpd-extras-filter-perl/Makefile 434427 2017-02-20 02:57:04Z jbeich $

PKGNAMESUFFIX=		-filter-perl
PORTREVISION=		2

COMMENT=		Perl-script filter support for OpenSMTPD

PLIST_FILES=		libexec/opensmtpd/filter-perl

CONFIGURE_ARGS+=	--with-experimental-filter-perl --with-perl-type=${perl_VERSION}

USES=			perl5

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
